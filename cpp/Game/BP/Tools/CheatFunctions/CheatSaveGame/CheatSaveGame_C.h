// /Game/BP/Tools/CheatFunctions/CheatSaveGame/CheatSaveGame.CheatSaveGame_C
// Derives from: USaveGame > UObject
// size 0x58, a blueprint class, blueprint

UCLASS(Config=Engine)
class UCheatSaveGame_C : public USaveGame
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSerializedGrid> Grids;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString SaveName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<SerializedActorWithInventories> SerializedActorsWithInventories;  // 0x0048, size 0x10
};
