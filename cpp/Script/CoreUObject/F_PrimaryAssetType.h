// /Script/CoreUObject.PrimaryAssetType
// size 0x8, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/PrimaryAssetId.h

USTRUCT()
struct FPrimaryAssetType
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
};
