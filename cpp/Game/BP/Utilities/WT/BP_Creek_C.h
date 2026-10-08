// /Game/BP/Utilities/WT/BP_Creek.BP_Creek_C
// Derives from: AWaterBody > AIcarusActor > AActor > UObject
// size 0x374, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Creek_C : public AWaterBody
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioSplineComponent* AudioSpline;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot1;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWTSplineMesh> SplineMeshes;  // 0x0358, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Offset;  // 0x0368, size 0xC

    UFUNCTION(BlueprintCallable) void SetUpAudioSpline();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
