// /Game/BP/AI/Bosses/Misc/BP_RockGolem_EatingRock.BP_RockGolem_EatingRock_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x351, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RockGolem_EatingRock_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight3;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight2;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavModifierComponent* NavModifier;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_GEN_Voxel_8_StaticMeshComponent0;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_GEN_Voxel_6_StaticMeshComponent0;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_GEN_Voxel_9_StaticMeshComponent0;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_GEN_Voxel_10_StaticMeshComponent0;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_GEN_Voxel_05_StaticMeshComponent0;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* VoxelRocks;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_GH_GolemSpawner_Crystal3_StaticMeshComponent0;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_GH_GolemSpawner_Crystal_StaticMeshComponent0;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_GH_GolemSpawner_Crystal2_StaticMeshComponent0;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultRoot;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* SelectedMaterial;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 NumRocksEaten;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* LastEatingCharacter;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<RockGolemRockModifierType> RockModifier;  // 0x0350, size 0x1

    UFUNCTION(BlueprintCallable) void EatRock(ACharacter* EatingCharacter);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_RockGolem_EatingRock(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDesiredMaterial(UMaterialInterface*& Output);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasRemainingRocks() const;  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_NumRocksEaten();
    UFUNCTION(BlueprintCallable) void OnRep_RockModifier();
    UFUNCTION(BlueprintCallable) void OnRep_SelectedRockType();
    UFUNCTION(BlueprintCallable) void UpdateMaterials();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
