// /Game/BP/Tools/CheatFunctions/Widgets/MetaResourceRow.MetaResourceRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2AC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UMetaResourceRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ResourceName;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusResourceType ResourceType;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaCurrencyRowHandle Currency_Row;  // 0x0294, size 0x18, named "Currency Row"

    UFUNCTION() void ExecuteUbergraph_MetaResourceRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMetaResource(FMetaCurrencyRowHandle CurrencyRow);  // parameters 0x18
};
