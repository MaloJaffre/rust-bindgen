// bindgen-flags: --with-derive-hash --with-derive-partialeq --with-derive-eq
template<typename T>
struct TErrorResult {
  enum UnionState {
    HasMessage,
    HasException,
  };
  int mResult;
  struct Message;
  struct DOMExceptionInfo;
  union {
    Message* mMessage;
    DOMExceptionInfo* mDOMExceptionInfo;
  };

  bool mMightHaveUnreported;
  UnionState mUnionState;
};

struct ErrorResult : public TErrorResult<int> {
};
