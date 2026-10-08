// /Script/HairStrandsCore.MovieSceneGroomCacheParams
// size 0x20, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/MovieSceneGroomCacheSection.h

USTRUCT()
struct FMovieSceneGroomCacheParams
{
    UPROPERTY(EditAnywhere) UGroomCache* GroomCache;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FFrameNumber FirstLoopStartFrameOffset;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) FFrameNumber StartFrameOffset;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) FFrameNumber EndFrameOffset;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float PlayRate;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) uint8 bReverse : 1;  // 0x0018, mask 0x01
};
