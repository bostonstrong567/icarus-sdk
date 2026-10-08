// /Game/UI/Windows/GreatHunt/UMG_GreatHunt_Selection.UMG_GreatHunt_Selection_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GreatHunt_Selection_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Background_;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Campaigns;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* GreatHunts;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FTalentArchetypeSelected TalentArchetypeSelected;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowLegendaryWeapon ShowLegendaryWeapon;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowOutpostFill ShowOutpostFill;  // 0x02B8, size 0x10

    UFUNCTION() void ExecuteUbergraph_UMG_GreatHunt_Selection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HuntClicked(FTalentArchetypesRowHandle Hunt, FLivingItemShopItemsRowHandle Weapon);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Populate_Buttons(bool DesignTime);  // parameters 0x1, named "Populate Buttons"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowLegendaryWeapon__DelegateSignature(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ShowOutpostFill__DelegateSignature();
    UFUNCTION(BlueprintCallable) void TalentArchetypeSelected__DelegateSignature(FTalentArchetypesRowHandle Archetype, FLivingItemShopItemsRowHandle Weapon);  // parameters 0x30
};
