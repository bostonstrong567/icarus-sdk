// /Script/Engine.InputComponent
// Derives from: UActorComponent > UObject
// size 0x138, declared in Engine/Source/Runtime/Engine/Classes/Components/InputComponent.h

UCLASS(Transient, Config=Input)
class UInputComponent : public UActorComponent
{
public:
    UPROPERTY(Transient) TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo;  // 0x0120, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FInputKeyBinding,TSizedDefaultAllocator<32> > KeyBindings;  // 0x00B0
    TArray<FInputTouchBinding,TSizedDefaultAllocator<32> > TouchBindings;  // 0x00C0
    TArray<FInputAxisBinding,TSizedDefaultAllocator<32> > AxisBindings;  // 0x00D0
    TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32> > AxisKeyBindings;  // 0x00E0
    TArray<FInputVectorAxisBinding,TSizedDefaultAllocator<32> > VectorAxisBindings;  // 0x00F0
    TArray<FInputGestureBinding,TSizedDefaultAllocator<32> > GestureBindings;  // 0x0100
    TArray<TSharedPtr<FInputActionBinding,0>,TSizedDefaultAllocator<32> > ActionBindings;  // 0x0110, private
    int32 Priority;  // 0x0130
    uint8 : 1 bBlockInput;  // 0x0134

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetControllerAnalogKeyState(FKey Key) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float& StickX, float& StickY) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetControllerKeyTimeDown(FKey Key) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetControllerMouseDelta(float& DeltaX, float& DeltaY) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetControllerVectorKeyState(FKey Key) const;  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTouchState(int32 FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsControllerKeyDown(FKey Key) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool WasControllerKeyJustPressed(FKey Key) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool WasControllerKeyJustReleased(FKey Key) const;  // parameters 0x19
};
