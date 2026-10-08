// /Game/UI/Components/UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LoadoutEnvirosuit_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* AllContent;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DefaultSuitName;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DefaultSuitStats;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Empty;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Empty_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Hover;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon_1;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InValidSuit;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Stats;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ValidSuit;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData CurrentItem;  // 0x02E8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnEnvirosuitChanged OnEnvirosuitChanged;  // 0x04D8, size 0x10

    UFUNCTION(BlueprintCallable) void ClearSuit();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_LoadoutEnvirosuit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void OnCursorCleared();
    UFUNCTION(BlueprintCallable) void OnCursorUpdated(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void OnEnvirosuitChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Update();
    UFUNCTION(BlueprintCallable) void UpdateState();
    UFUNCTION(BlueprintCallable) void UpdateStats(FItemData Item);  // parameters 0x1F0
};
