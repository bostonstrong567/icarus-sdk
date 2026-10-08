// /Script/InteractiveToolsFramework.InputRouter
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InputRouter.h

UCLASS(Transient)
class UInputRouter : public UObject
{
public:
    UPROPERTY() bool bAutoInvalidateOnHover;  // 0x0028, size 0x1
    UPROPERTY() bool bAutoInvalidateOnCapture;  // 0x0029, size 0x1
    UPROPERTY() UInputBehaviorSet* ActiveInputBehaviors;  // 0x0038, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    IToolsContextTransactionsAPI * TransactionsAPI;  // 0x0030, protected
    UInputBehavior * ActiveKeyboardCapture;  // 0x0040, protected
    void * ActiveKeyboardCaptureOwner;  // 0x0048, protected
    FInputCaptureData ActiveKeyboardCaptureData;  // 0x0050, protected
    UInputBehavior * ActiveLeftCapture;  // 0x0060, protected
    void * ActiveLeftCaptureOwner;  // 0x0068, protected
    FInputCaptureData ActiveLeftCaptureData;  // 0x0070, protected
    UInputBehavior * ActiveRightCapture;  // 0x0080, protected
    void * ActiveRightCaptureOwner;  // 0x0088, protected
    FInputCaptureData ActiveRightCaptureData;  // 0x0090, protected
    UInputBehavior * ActiveLeftHoverCapture;  // 0x00A0, protected
    void * ActiveLeftHoverCaptureOwner;  // 0x00A8, protected

    // Virtual functions that start here:
    //   DeregisterSource, ForceTerminateAll, ForceTerminateSource, HasActiveMouseCapture, Initialize
    //   PostHoverInputEvent, PostInputEvent, PostInputEvent_Keyboard, PostInputEvent_Mouse
    //   RegisterBehavior, RegisterSource, Shutdown
};
