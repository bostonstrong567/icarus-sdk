// /Script/FMODStudio.FMODEventControlSectionTemplate
// size 0xB8, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Private/Sequencer/FMODEventControlSectionTemplate.h

USTRUCT()
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
public:
    UPROPERTY() FFMODEventControlChannel ControlKeys;  // 0x0020, size 0x98
};
