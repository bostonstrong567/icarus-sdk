// /Game/UI/Components/UMG_DropshipPartSmall.UMG_DropshipPartSmall_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropshipPartSmall_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Empty;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData CurrentItem;  // 0x0278, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery Query;  // 0x0468, size 0x48
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_DropshipEditor_Dropship_C* EditorDropship;  // 0x04B0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_DropshipPartSmall(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UUMG_DropshipEditor_Dropship_C* Parent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LoadIcon(TSoftObjectPtr<UTexture2D> Texture);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnLoaded_6FF29948471A55576D5E19A5F0534075(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Update(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void UpdateState();
};
