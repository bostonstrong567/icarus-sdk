// /Script/Icarus.PaintingRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/PaintingRecorderComponent.h

UCLASS(Abstract, MinimalAPI)
class UPaintingRecorderInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) FPaintingsRowHandle GetPaintingImageRow() const;  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void SetPaintingImage(const FPaintingsRowHandle& PaintingRow);  // parameters 0x18
};
