// /Game/UI/Compass/BP_IcarusWaypointActor.BP_IcarusWaypointActor_C
// Derives from: AIcarusWaypointActor > AActor > UObject
// size 0x240, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusWaypointActor_C : public AIcarusWaypointActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AIcarusPlayerState* OwningPlayerState;  // 0x0238, size 0x8

    UFUNCTION(BlueprintCallable) void CleanUpWaypointRefs();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusWaypointActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusPlayerState* GetOwningPlayerState() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitForPlayer(AIcarusPlayerState* OwningPlayerState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_OwningPlayerState();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ServerKillWaypoint();
    UFUNCTION(BlueprintCallable) void SetupWidget();
};
