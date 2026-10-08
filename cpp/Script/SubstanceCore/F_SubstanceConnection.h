// /Script/SubstanceCore.SubstanceConnection
// size 0x20, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceUtility.h

USTRUCT()
struct FSubstanceConnection
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString OutputIdentifier;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString InputImageIdentifier;  // 0x0010, size 0x10
};
