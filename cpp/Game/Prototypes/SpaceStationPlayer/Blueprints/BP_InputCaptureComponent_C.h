// /Game/Prototypes/SpaceStationPlayer/Blueprints/BP_InputCaptureComponent.BP_InputCaptureComponent_C
// Derives from: UActorComponent > UObject
// size 0x140, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_InputCaptureComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnLookUp OnLookUp;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnLookRight OnLookRight;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnFire OnFire;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnAltFire OnAltFire;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnEndInputCapture OnEndInputCapture;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnBeginInputCapture OnBeginInputCapture;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnMoveForward OnMoveForward;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool InputCaptureActive;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnJump OnJump;  // 0x0130, size 0x10

    UFUNCTION(BlueprintCallable, Server, Reliable) void BeginInputCapture(UBP_InputCaptureComponent_C* CaptureComponent, AActor* Instigator);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void EndInputCapture(UBP_InputCaptureComponent_C* CaptureComponent);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_InputCaptureComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnAltFire__DelegateSignature(bool Pressed);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnBeginInputCapture__DelegateSignature(UBP_InputCaptureComponent_C* CaptureComponent, AActor* Instigator);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnEndInputCapture__DelegateSignature(UBP_InputCaptureComponent_C* CaptureComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFire__DelegateSignature(bool Pressed);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnJump__DelegateSignature(bool Pressed);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLookRight__DelegateSignature(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLookUp__DelegateSignature(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnMoveForward__DelegateSignature(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server) void ServerAltFire(bool Pressed);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server) void ServerFire(bool Pressed);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server) void ServerJump(bool Pressed);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server) void ServerLookRight(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server) void ServerLookUp(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server) void ServerMoveForward(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldBlockInput() const;  // parameters 0x1
};
