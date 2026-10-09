// /Script/Engine.PlayerInput
// Derives from: UObject
// size 0x3A8, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h

UCLASS(Transient, Config=Input)
class UPlayerInput : public UObject
{
public:
    FVector[11] Touches;  // 0x0028, not reflected
    TMap<unsigned int,FVector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,FVector,0> > TouchEventLocations;  // 0x00B0, not reflected
    float[2] ZeroTime;  // 0x0100, not reflected
    float[2] SmoothedMouse;  // 0x0108, not reflected
    int32 MouseSamples;  // 0x0110, not reflected
    float MouseSamplingTotal;  // 0x0114, not reflected
    UPROPERTY(Config) TArray<FKeyBind> DebugExecBindings;  // 0x0120, size 0x10
    TArray<FInputAxisConfigEntry,TSizedDefaultAllocator<32> > AxisConfig;  // 0x0130, not reflected
    TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32> > ActionMappings;  // 0x0140, not reflected
    TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32> > AxisMappings;  // 0x0150, not reflected
    UPROPERTY(Config) TArray<FName> InvertedAxis;  // 0x0160, size 0x10
private:
    TEnumAsByte<enum EInputEvent> CurrentEvent;  // 0x0118, not reflected
    TMap<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0> > AxisProperties;  // 0x0170, not reflected
    TMap<FName,UPlayerInput::FActionKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0> > ActionKeyMap;  // 0x01C0, not reflected
    TMap<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0> > AxisKeyMap;  // 0x0210, not reflected
    TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0> > KeyStateMap;  // 0x0260, not reflected
    uint32 KeyMapBuildIndex;  // 0x02B0, not reflected
    uint8 : 1 bKeyMapsBuilt;  // 0x02B4, not reflected
    FGestureRecognizer GestureRecognizer;  // 0x02B8, not reflected
    TArray<unsigned int,TSizedDefaultAllocator<32> > EventIndices;  // 0x0390, not reflected
    uint32 EventCount;  // 0x03A0, not reflected
    float LastTimeDilation;  // 0x03A4, not reflected
public:
    UFUNCTION(Exec) void ClearSmoothing();
    UFUNCTION(Exec) void InvertAxis(FName AxisName);  // parameters 0x8
    UFUNCTION(Exec) void InvertAxisKey(FKey AxisKey);  // parameters 0x18
    UFUNCTION(Exec) void SetBind(FName BindName, FString Command);  // parameters 0x18
    UFUNCTION(Exec) void SetMouseSensitivity(float Sensitivity);  // parameters 0x4

    // Virtual functions that start here:
    //   ConditionalBuildKeyMappings_Internal, DisplayDebug, InputAxis, InputKey, IsKeyHandledByAction
    //   MassageAxisInput, MassageVectorAxisInput, ProcessInputStack, SmoothMouse
};
