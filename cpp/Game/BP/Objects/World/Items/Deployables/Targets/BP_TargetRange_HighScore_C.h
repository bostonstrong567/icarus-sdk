// /Game/BP/Objects/World/Items/Deployables/Targets/BP_TargetRange_HighScore.BP_TargetRange_HighScore_C
// Derives from: ATargetRangeScoreboard > AIcarusActor > AActor > UObject
// size 0x2F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TargetRange_HighScore_C : public ATargetRangeScoreboard
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02E8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_TargetRange_HighScore(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
