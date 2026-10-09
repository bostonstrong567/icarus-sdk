// /Script/Engine.AssetManagerRedirect
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/AssetManagerSettings.h

USTRUCT()
struct FAssetManagerRedirect
{
public:
    UPROPERTY(EditAnywhere) FString Old;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FString New;  // 0x0010, size 0x10
};
