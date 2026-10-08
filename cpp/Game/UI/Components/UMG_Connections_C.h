// /Game/UI/Components/UMG_Connections.UMG_Connections_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Connections_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnectionList_C* UMG_ResourceConnectionList;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor False;  // 0x0278, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor True;  // 0x02A0, size 0x28

    UFUNCTION() void ExecuteUbergraph_UMG_Connections(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTransmutationEnergyRemaining();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor);  // parameters 0x8
};
