// /Script/Icarus.SkeletalProjectile
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x580, declared in Icarus/Source/Icarus/Actors/SkeletalProjectile.h

UCLASS(Config=Engine)
class ASkeletalProjectile : public ASkeletalItem
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* InterpolatedMeshComponent;  // 0x0578, size 0x8

    UFUNCTION(BlueprintNativeEvent) void OnProjectileActivated();
    UFUNCTION(BlueprintNativeEvent) void OnProjectileDeactivated();
};
