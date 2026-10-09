// /Script/Icarus.MusicTrack
// size 0x138, declared in Icarus/Source/Icarus/DataStructs/Audio/MusicTrackData.h

USTRUCT()
struct FMusicTrack : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> Event;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* FadeInCurve;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* FadeOutCurve;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* PrevTrackOverrideFadeOutCurve;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTrackCanBePaused;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 PlayerStateFlags;  // 0x0059, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FMusicLocationConditionsRowHandle> Locations;  // 0x0060, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 CombatFlags;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 TimeOfDayFlags;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 WeatherFlags;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 DropTimeFlags;  // 0x00B3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 DropStateFlags;  // 0x00B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 GameplayEventFlags;  // 0x00B5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 DisasterFlags;  // 0x00B6, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FMusicQuestConditionsRowHandle> Quests;  // 0x00B8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMusicTrackStateGroupsRowHandle StateGroup;  // 0x0108, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Tempo;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Key;  // 0x0124, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TimeSignature;  // 0x012C, size 0x8
};
