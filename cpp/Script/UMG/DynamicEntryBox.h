// /Script/UMG.DynamicEntryBox
// Derives from: UDynamicEntryBoxBase > UWidget > UVisual > UObject
// size 0x1E0, declared in Engine/Source/Runtime/UMG/Public/Components/DynamicEntryBox.h

UCLASS()
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UUserWidget> EntryWidgetClass;  // 0x01D8, size 0x8

    UFUNCTION(BlueprintCallable) UUserWidget* BP_CreateEntry();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UUserWidget* BP_CreateEntryOfClass(TSubclassOf<UUserWidget> EntryClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveEntry(UUserWidget* EntryWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Reset(bool bDeleteWidgets);  // parameters 0x1
};
