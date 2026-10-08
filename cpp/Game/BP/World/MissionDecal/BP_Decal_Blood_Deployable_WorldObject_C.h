// /Game/BP/World/MissionDecal/BP_Decal_Blood_Deployable_WorldObject.BP_Decal_Blood_Deployable_WorldObject_C
// Derives from: ABP_Decal_Deployable_BaseWorldObject_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4C5, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Decal_Blood_Deployable_WorldObject_C : public ABP_Decal_Deployable_BaseWorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation1;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_0;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_0;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker5_0;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker4_0;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker3_0;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker2_0;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker1_0;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow5_0;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow4_0;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow3_0;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow2_0;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1_0;  // 0x0458, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass_0;  // 0x0460, size 0x10, named "Block Grass_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface_0;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material_0;  // 0x0480, size 0x10, named "Decal Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Material_0;  // 0x0490, size 0x8, named "Dynamic Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow_0;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials_0;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorPosition_0;  // 0x04B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActorSet_0;  // 0x04C4, size 0x1
};
