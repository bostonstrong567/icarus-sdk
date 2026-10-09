// /Script/Icarus.CropPlotRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CropPlotRecorderComponent.h

UCLASS(Abstract, MinimalAPI)
class UCropPlotRecorderInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) void GetCropPlotValues(TArray<FCultivationSaveData>& SaveData);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void SetCropPlotValues(const TArray<FCultivationSaveData>& SaveData);  // parameters 0x10
};
