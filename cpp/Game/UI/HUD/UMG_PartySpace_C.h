// /Game/UI/HUD/UMG_PartySpace.UMG_PartySpace_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PartySpace_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PartyList;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPartyReadyStateChanged PartyReadyStateChanged;  // 0x0270, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PartySpace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PartyReadyStateChanged__DelegateSignature(bool AllPlayersReady);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PlayerPartyChanged();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
