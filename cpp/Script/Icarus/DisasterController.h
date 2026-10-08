// /Script/Icarus.DisasterController
// Derives from: AInfo > AActor > UObject
// size 0x230, declared in Icarus/Source/Icarus/Systems/Disaster/DisasterController.h

UCLASS(Config=Engine)
class ADisasterController : public AInfo
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFireControllerComponent* FireController;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UIcarusStatContainer* StatContainer;  // 0x0228, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void DropShipAtomiseFoliage(FVector Location, float Radius);  // parameters 0x10
    UFUNCTION() void SetWorldStats();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void StopGeneratingLightning(FBiomesEnum Biome);  // parameters 0x10
};
