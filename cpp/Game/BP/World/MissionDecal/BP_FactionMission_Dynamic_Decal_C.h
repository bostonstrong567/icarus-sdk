// /Game/BP/World/MissionDecal/BP_FactionMission_Dynamic_Decal.BP_FactionMission_Dynamic_Decal_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4A1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FactionMission_Dynamic_Decal_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox5;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox4;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox3;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox2;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox1;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker5;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker4;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker3;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker2;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker1;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow5;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow4;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow3;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow2;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass;  // 0x03A8, size 0x10, named "Block Grass"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material;  // 0x03C8, size 0x10, named "Decal Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Material;  // 0x03D8, size 0x8, named "Dynamic Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow;  // 0x03E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials;  // 0x03F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorPosition;  // 0x0400, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActorSet;  // 0x040C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Footprints;  // 0x040D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Blood;  // 0x040E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Scratches;  // 0x040F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decals_Blood;  // 0x0410, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decals_Scratches;  // 0x0420, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decals_Prints;  // 0x0430, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> DynamicArray;  // 0x0440, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RandomActorRotation;  // 0x0450, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DynamicLocation;  // 0x0451, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float DynamicLocation_MinDistance;  // 0x0454, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float DynamicLocation_MaxDistance;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, Interp, BlueprintReadWrite) bool ShiftedLocation;  // 0x045C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHighlightableRowHandle> HighlightableRows;  // 0x0460, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RunConstruction;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 QuestData;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDecalInteracted DecalInteracted;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMeshComponent*> HighlightCollisionBoxes;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LastHaveOverLap;  // 0x0498, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastOverlapCount;  // 0x049C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool HasBeenInteracted;  // 0x04A0, size 0x1

    UFUNCTION(BlueprintCallable) void DecalInteracted__DelegateSignature(int32 QuestData);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_FactionMission_Dynamic_Decal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Highlight_Decals(AActor* OtherActor, bool Started);  // parameters 0x9, named "Highlight Decals"
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnRep_HasBeenInteracted();
    UFUNCTION(BlueprintCallable) void ReRun();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RunConstructionLogic();
    UFUNCTION(BlueprintCallable) void SetupDecalArray();
    UFUNCTION(BlueprintCallable) void StopHighlightsWhenInteracted();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
