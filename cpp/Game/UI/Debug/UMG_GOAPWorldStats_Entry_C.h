// /Game/UI/Debug/UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GOAPWorldStats_Entry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_Count;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_Name;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle RowHandle;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AIcarusNPCGOAPCharacter> NPCGOAPChar;  // 0x0290, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_GOAPWorldStats_Entry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateName();
};
