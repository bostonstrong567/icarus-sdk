// /Game/Developers/jakedodunski/Test/BP_TestSplineConnection.BP_TestSplineConnection_C
// Derives from: AActor > UObject
// size 0x240, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TestSplineConnection_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartPoint;  // 0x0228, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EndPoint;  // 0x0234, size 0xC

    UFUNCTION(BlueprintCallable) void Create();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
