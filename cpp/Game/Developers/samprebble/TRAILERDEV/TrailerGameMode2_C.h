// /Game/Developers/samprebble/TRAILERDEV/TrailerGameMode2.TrailerGameMode2_C
// Derives from: ATrailerGameMode_C > AGameModeBase > AInfo > AActor > UObject
// size 0x2D0, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ATrailerGameMode2_C : public ATrailerGameMode_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_TrailerGameMode2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
