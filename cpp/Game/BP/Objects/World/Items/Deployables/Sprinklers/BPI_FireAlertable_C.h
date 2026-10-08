// /Game/BP/Objects/World/Items/Deployables/Sprinklers/BPI_FireAlertable.BPI_FireAlertable_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPI_FireAlertable_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void NotifyOfFire(FVector FireLocation, bool& WasNotified);  // parameters 0xD
};
