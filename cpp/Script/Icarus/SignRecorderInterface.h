// /Script/Icarus.SignRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/SignRecorderComponent.h

UCLASS(Abstract, MinimalAPI)
class USignRecorderInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) FLinearColor GetSignColor() const;  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) FItemableRowHandle GetSignIconRow() const;  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) FText GetSignText() const;  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void SetSignIcon(const FItemableRowHandle& IconRow);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void SetSignText(const FText& Text, const FLinearColor& Color);  // parameters 0x28
};
