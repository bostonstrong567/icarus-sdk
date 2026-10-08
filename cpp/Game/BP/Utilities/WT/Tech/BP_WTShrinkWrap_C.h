// /Game/BP/Utilities/WT/Tech/BP_WTShrinkWrap.BP_WTShrinkWrap_C
// Derives from: AActor > UObject
// size 0x238, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WTShrinkWrap_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWTShrinkWrap> ShrinkWrap;  // 0x0228, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
