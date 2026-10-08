// /Game/BP/World/MissionDecal/BP_Decal_Blood_Deployable.BP_Decal_Blood_Deployable_C
// Derives from: ABP_Decal_Deployable_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x8DD, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Decal_Blood_Deployable_C : public ABP_Decal_Deployable_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_0;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_0;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation1;  // 0x0820, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker5_0;  // 0x0828, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker4_0;  // 0x0830, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker3_0;  // 0x0838, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker2_0;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker1_0;  // 0x0848, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow5_0;  // 0x0850, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow4_0;  // 0x0858, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow3_0;  // 0x0860, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow2_0;  // 0x0868, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1_0;  // 0x0870, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass_0;  // 0x0878, size 0x10, named "Block Grass_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface_0;  // 0x0888, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material_0;  // 0x0898, size 0x10, named "Decal Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Material_0;  // 0x08A8, size 0x8, named "Dynamic Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow_0;  // 0x08B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials_0;  // 0x08C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorPosition_0;  // 0x08D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActorSet_0;  // 0x08DC, size 0x1
};
