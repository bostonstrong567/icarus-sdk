// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Ape_Club.BP_SkeletalItem_Ape_Club_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Ape_Club_C : public ASkeletalItem
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ITM_Club_Ape_Plates_1;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ITM_Club_Ape_Injector_1;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ITM_Club_Ape_Amplifier_1;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ITM_Club_Ape_Absorber_1;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Capsule;  // 0x05A0, size 0x8
};
