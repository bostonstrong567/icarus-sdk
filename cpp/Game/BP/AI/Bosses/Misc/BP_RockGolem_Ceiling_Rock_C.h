// /Game/BP/AI/Bosses/Misc/BP_RockGolem_Ceiling_Rock.BP_RockGolem_Ceiling_Rock_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5DC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RockGolem_Ceiling_Rock_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* Earthquake_Audio;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> SelectedRockMesh;  // 0x0598, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UStaticMesh>> AvailableRockMeshes;  // 0x05C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationX;  // 0x05D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationY;  // 0x05D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationZ;  // 0x05D8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_RockGolem_Ceiling_Rock(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnLoaded_40BCF03848933799DA3ABA94A81941B5(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_SelectedRockMesh();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
