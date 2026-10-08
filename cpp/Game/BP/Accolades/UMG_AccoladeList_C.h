// /Game/BP/Accolades/UMG_AccoladeList.UMG_AccoladeList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AccoladeList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Angle_1;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TypeText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* UniformGridPanel_670;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerAccoladeCategoriesRowHandle Category;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_PlayerAccolade_C*> AccoladeWidgets;  // 0x0298, size 0x10

    UFUNCTION() void ExecuteUbergraph_UMG_AccoladeList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Init(FPlayerAccoladeCategoriesRowHandle Category, TArray<FAccoladesRowHandle>& Accolades);  // parameters 0x28
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RefreshState();
};
