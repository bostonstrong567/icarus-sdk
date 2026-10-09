// /Script/Icarus.DrillRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/DrillRecorderComponent.h

UCLASS(Abstract)
class UDrillRecorderInterface : public UInterface
{
public:
    UFUNCTION(BlueprintImplementableEvent) void LoadDrillData(const FDrillSaveData& DrillData);  // parameters 0x2
    UFUNCTION(BlueprintImplementableEvent) FDrillSaveData SaveDrillData();  // parameters 0x2
};
