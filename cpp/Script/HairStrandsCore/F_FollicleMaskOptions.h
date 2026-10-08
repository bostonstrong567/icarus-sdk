// /Script/HairStrandsCore.FollicleMaskOptions
// size 0x10, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCreateFollicleMaskOptions.h

USTRUCT()
struct FFollicleMaskOptions
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UGroomAsset* Groom;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFollicleMaskChannel Channel;  // 0x0008, size 0x1
};
