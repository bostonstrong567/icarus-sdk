// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Queen.BP_Queen_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x360, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Queen_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0328, size 0x8
    UPROPERTY() float MoveQueenTimeline_Movement_4B6EAA4744932D9D3181E08DB1A45534;  // 0x0330, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> MoveQueenTimeline__Direction_4B6EAA4744932D9D3181E08DB1A45534;  // 0x0334, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* MoveQueenTimeline;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeToComplete;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_QueenSpline_C* QueenSpline;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool Fly;  // 0x0350, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool Land;  // 0x0351, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool FlyToCenter;  // 0x0352, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool Screech;  // 0x0353, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ScreechEvent;  // 0x0358, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Queen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MoveQueen();
    UFUNCTION() void MoveQueenTimeline__FinishedFunc();
    UFUNCTION() void MoveQueenTimeline__UpdateFunc();
    UFUNCTION(BlueprintCallable) void OnRep_FlyToCenter();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicatedFlyToCenter();
    UFUNCTION(BlueprintCallable) void TriggerFlyToCenter();
    UFUNCTION(BlueprintCallable) void TriggerScreech();
    UFUNCTION(BlueprintCallable) void TriggerSmash();
};
