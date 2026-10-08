// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2_Formation_Melt_Deploy.BPQ_OLY_Omni_Research_2_Formation_Melt_Deploy_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x46C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_Formation_Melt_Deploy_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCampfires;  // 0x0468, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxHeat();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetNearbyHeat();  // parameters 0x4
};
