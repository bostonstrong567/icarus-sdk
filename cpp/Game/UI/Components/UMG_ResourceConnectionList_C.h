// /Game/UI/Components/UMG_ResourceConnectionList.UMG_ResourceConnectionList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceConnectionList_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnection_C* Fuel;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnection_C* Power;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnection_C* Water;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCallable) void Initialise(AIcarusActor* LinkedActor);  // parameters 0x8
};
