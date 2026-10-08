// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_DeployableSnapActor.BP_Faction_Mission_DeployableSnapActor_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x360, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_DeployableSnapActor_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UStaticMesh* StaticMesh;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) USkeletalMesh* SkeletalMesh;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool MeshVisible;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UAnimSequence* SkeletalMeshAnimation;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FHighlightableRowHandle Highlightable_Override;  // 0x0348, size 0x18, named "Highlightable Override"

    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_DeployableSnapActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideSnapActor(bool ActorVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_Highlightable_Override();  // named "OnRep_Highlightable Override"
    UFUNCTION(BlueprintCallable) void OnRep_MeshVisible();
    UFUNCTION(BlueprintCallable) void OnRep_SkeletalMesh();
    UFUNCTION(BlueprintCallable) void OnRep_SkeletalMeshAnimation();
    UFUNCTION(BlueprintCallable) void OnRep_StaticMesh();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetupMesh(UStaticMesh* NewStaticMesh, USkeletalMesh* NewSkeletalMesh, UAnimSequence* NewSkeletalMeshAnimation, FHighlightableRowHandle HighlightableOverride);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Update_Animation();  // named "Update Animation"
};
