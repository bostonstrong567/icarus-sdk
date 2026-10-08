// /Game/UI/Windows/UMG_MissionSpecialReward_Talent.UMG_MissionSpecialReward_Talent_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x284, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionSpecialReward_Talent_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Unlocks;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPlayerTalentModifiersRowHandle> Talent_Unlocks;  // 0x0270, size 0x10, named "Talent Unlocks"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Points;  // 0x0280, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionSpecialReward_Talent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup();
};
