// /Script/HairStrandsCore.HairGroupsLOD
// size 0x18, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomBuilder.h

USTRUCT()
struct FHairGroupsLOD
{
public:
    UPROPERTY(EditAnywhere) TArray<FHairLODSettings> LODs;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) float ClusterWorldSize;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float ClusterScreenSizeScale;  // 0x0014, size 0x4
};
