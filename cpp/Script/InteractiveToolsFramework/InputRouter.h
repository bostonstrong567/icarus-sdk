// /Script/InteractiveToolsFramework.InputRouter
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InputRouter.h

UCLASS(Transient)
class UInputRouter : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() bool bAutoInvalidateOnHover;  // 0x0028, size 0x1
    UPROPERTY() bool bAutoInvalidateOnCapture;  // 0x0029, size 0x1
protected:
    IToolsContextTransactionsAPI * TransactionsAPI;  // 0x0030, not reflected
    UPROPERTY() UInputBehaviorSet* ActiveInputBehaviors;  // 0x0038, size 0x8
    UInputBehavior * ActiveKeyboardCapture;  // 0x0040, not reflected
    void * ActiveKeyboardCaptureOwner;  // 0x0048, not reflected
    FInputCaptureData ActiveKeyboardCaptureData;  // 0x0050, not reflected
    UInputBehavior * ActiveLeftCapture;  // 0x0060, not reflected
    void * ActiveLeftCaptureOwner;  // 0x0068, not reflected
    FInputCaptureData ActiveLeftCaptureData;  // 0x0070, not reflected
    UInputBehavior * ActiveRightCapture;  // 0x0080, not reflected
    void * ActiveRightCaptureOwner;  // 0x0088, not reflected
    FInputCaptureData ActiveRightCaptureData;  // 0x0090, not reflected
    UInputBehavior * ActiveLeftHoverCapture;  // 0x00A0, not reflected
    void * ActiveLeftHoverCaptureOwner;  // 0x00A8, not reflected

    // Virtual functions that start here:
    //   DeregisterSource, ForceTerminateAll, ForceTerminateSource, HasActiveMouseCapture, Initialize
    //   PostHoverInputEvent, PostInputEvent, PostInputEvent_Keyboard, PostInputEvent_Mouse
    //   RegisterBehavior, RegisterSource, Shutdown
};
