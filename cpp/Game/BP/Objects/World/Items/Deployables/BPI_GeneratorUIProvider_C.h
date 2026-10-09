// /Game/BP/Objects/World/Items/Deployables/BPI_GeneratorUIProvider.BPI_GeneratorUIProvider_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPI_GeneratorUIProvider_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void UseDeviceToggle(bool& WantsDeviceToggle);  // parameters 0x1
};
