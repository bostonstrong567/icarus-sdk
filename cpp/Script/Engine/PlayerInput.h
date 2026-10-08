// /Script/Engine.PlayerInput
// Derives from: UObject
// size 0x3A8, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h

UCLASS(Transient, Config=Input)
class UPlayerInput : public UObject
{
public:
    UPROPERTY(Config) TArray<FKeyBind> DebugExecBindings;  // 0x0120, size 0x10
    UPROPERTY(Config) TArray<FName> InvertedAxis;  // 0x0160, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FVector[11] Touches;  // 0x0028
    TMap<unsigned int,FVector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,FVector,0> > TouchEventLocations;  // 0x00B0
    float[2] ZeroTime;  // 0x0100
    float[2] SmoothedMouse;  // 0x0108
    int32 MouseSamples;  // 0x0110
    float MouseSamplingTotal;  // 0x0114
    TEnumAsByte<enum EInputEvent> CurrentEvent;  // 0x0118, private
    TArray<FInputAxisConfigEntry,TSizedDefaultAllocator<32> > AxisConfig;  // 0x0130
    TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32> > ActionMappings;  // 0x0140
    TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32> > AxisMappings;  // 0x0150
    TMap<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0> > AxisProperties;  // 0x0170, private
    TMap<FName,UPlayerInput::FActionKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0> > ActionKeyMap;  // 0x01C0, private
    TMap<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0> > AxisKeyMap;  // 0x0210, private
    TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0> > KeyStateMap;  // 0x0260, private
    uint32 KeyMapBuildIndex;  // 0x02B0, private
    uint8 : 1 bKeyMapsBuilt;  // 0x02B4, private
    FGestureRecognizer GestureRecognizer;  // 0x02B8, private
    TArray<unsigned int,TSizedDefaultAllocator<32> > EventIndices;  // 0x0390, private
    uint32 EventCount;  // 0x03A0, private
    float LastTimeDilation;  // 0x03A4, private

    UFUNCTION(Exec) void ClearSmoothing();
    UFUNCTION(Exec) void InvertAxis(FName AxisName);  // parameters 0x8
    UFUNCTION(Exec) void InvertAxisKey(FKey AxisKey);  // parameters 0x18
    UFUNCTION(Exec) void SetBind(FName BindName, FString Command);  // parameters 0x18
    UFUNCTION(Exec) void SetMouseSensitivity(float Sensitivity);  // parameters 0x4

    // Virtual functions that start here:
    //   ConditionalBuildKeyMappings_Internal, DisplayDebug, InputAxis, InputKey, IsKeyHandledByAction
    //   MassageAxisInput, MassageVectorAxisInput, ProcessInputStack, SmoothMouse
};
