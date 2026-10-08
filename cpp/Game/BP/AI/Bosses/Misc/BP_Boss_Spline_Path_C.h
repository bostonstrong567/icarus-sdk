// /Game/BP/AI/Bosses/Misc/BP_Boss_Spline_Path.BP_Boss_Spline_Path_C
// Derives from: AActor > UObject
// size 0x240, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Boss_Spline_Path_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<BossSplinePathConnection> PathLinks;  // 0x0228, size 0x10
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) FName SelfActorTag;  // 0x0238, size 0x8

    UFUNCTION(BlueprintCallable) void ClearDebug();
    UFUNCTION(BlueprintCallable) void DebugConnections();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
