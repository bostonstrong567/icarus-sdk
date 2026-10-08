// /Game/BP/World/MissionDecal/BP_Decal_Scratches_Deployable.BP_Decal_Scratches_Deployable_C
// Derives from: ABP_Decal_Deployable_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x87D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Decal_Scratches_Deployable_C : public ABP_Decal_Deployable_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation1;  // 0x0810, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass_0;  // 0x0818, size 0x10, named "Block Grass_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface_0;  // 0x0828, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material_0;  // 0x0838, size 0x10, named "Decal Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Material_0;  // 0x0848, size 0x8, named "Dynamic Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow_0;  // 0x0850, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials_0;  // 0x0860, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorPosition_0;  // 0x0870, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActorSet_0;  // 0x087C, size 0x1
};
