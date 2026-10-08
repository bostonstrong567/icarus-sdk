// /Game/BP/Objects/World/Delivery/BP_Medevac_Pod.BP_Medevac_Pod_C
// Derives from: ABP_Transport_Pod_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Medevac_Pod_C : public ABP_Transport_Pod_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_DPS_SML_DropShip_02_TOP1;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_DPS_SML_DropShip_02_TOP;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x04E8, size 0x8

    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
