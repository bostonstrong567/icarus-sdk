// /Game/UI/Accolades/UMG_MissionEndAccolades.UMG_MissionEndAccolades_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionEndAccolades_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* BadgesScrollBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* RibbonsScrollBox;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_AccoladeMissionProgress_C*> BadgeAccolades;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_AccoladeMissionProgress_C*> RibbonAccolades;  // 0x02A8, size 0x10

    UFUNCTION(BlueprintCallable) void AddAccoladeToList(FAccoladesRowHandle Accolade, bool Complete);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void AnimateCompletedAccolades();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionEndAccolades(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitAccoladeList();
};
